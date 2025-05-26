import pandas as pd
from sklearn.model_selection import train_test_split

"""
    ASSIGNMENT 2 (STUDENT VERSION):
    Using pandas to explore Titanic data from Kaggle (titanic_to_student.csv) and answer the questions.
    (Note that the following functions already take the Titanic dataset as a DataFrame, so you don’t need to use read_csv.)

"""


def Q1(df):
    return df.shape[0]


def Q2(df):
    threshold = len(df) * 0.5
    df = df.dropna(thresh=threshold, axis=1)

    flat_value_threshold = 0.7
    for column in df.select_dtypes(include=['object']).columns:
        top_freq = df[column].value_counts(normalize=True).values[0]
        if top_freq > flat_value_threshold:
            df = df.drop(columns=[column])

    return df.shape[1]


def Q3(df):
    df = df.dropna(subset=['Survived'])

    return df.shape[0]


def Q4(df):
    DF_Q1 = df['Fare'].quantile(0.25)
    DF_Q3 = df['Fare'].quantile(0.75)
    IQR = DF_Q3 - DF_Q1

    LOWER_BOUND = DF_Q1 - 1.5 * IQR
    UPPER_BOUND = DF_Q3 + 1.5 * IQR

    df.loc[df['Fare'] < LOWER_BOUND, 'Fare'] = LOWER_BOUND
    df.loc[df['Fare'] > UPPER_BOUND, 'Fare'] = UPPER_BOUND

    return round(df['Fare'].mean(), 2)


def Q5(df):
    OLD_MEAN = df['Age'].mean()

    df.fillna(OLD_MEAN, inplace=True)

    return round(df['Age'].mean(), 2)


def Q6(df):
    df = pd.get_dummies(df, columns=['Embarked'], prefix='Embarked')

    return round(df['Embarked_Q'].mean(), 2)


def Q7(df):
    train, test = train_test_split(df, train_size=0.7, test_size=0.3, stratify=df['Survived'], random_state=123)

    df_survived = df['Survived'].value_counts(normalize=True)
    train_survived = train['Survived'].value_counts(normalize=True)
    test_survived = test['Survived'].value_counts(normalize=True)

    # print(df_survived)
    # print(train_survived)
    # print(test_survived)

    train_survived_ratio = train_survived[1]
    return round(train_survived_ratio, 2)

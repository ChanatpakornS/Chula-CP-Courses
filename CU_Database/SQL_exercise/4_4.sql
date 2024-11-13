WITH order_count(product_id, total) AS (
	SELECT product_id, COUNT(ordered_quantity) as total FROM ORDER_LINE GROUP BY product_id
)

SELECT product_id, product_description
FROM order_count 
NATURAL JOIN PRODUCT
WHERE total = (SELECT MAX(total) FROM order_count);
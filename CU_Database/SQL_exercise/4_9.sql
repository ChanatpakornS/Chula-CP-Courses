SELECT o.customer_id, c.customer_name FROM ORDERT o
NATURAL JOIN CUSTOMER c
WHERE order_date >= '2020-01-10' AND order_date < '2020-01-16'
GROUP BY o.customer_id, c.customer_name
WITH CUSTOMER_COUNT(customer_id, order_count) AS (
	SELECT customer_id, COUNT(order_id) FROM ORDERT
	GROUP BY customer_id
)

SELECT c.customer_id, c.customer_name FROM CUSTOMER c
JOIN CUSTOMER_COUNT cc
	ON cc.customer_id = c.customer_id
WHERE cc.order_count = (SELECT MAX(order_count) FROM CUSTOMER_COUNT);
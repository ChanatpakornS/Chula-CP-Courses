SELECT o.customer_id,c.customer_name, COUNT(o.order_id) AS number_of_orders
FROM ORDERT o
JOIN CUSTOMER c
	ON o.customer_id = c.customer_id
GROUP BY o.customer_id, c.customer_name
ORDER BY number_of_orders DESC;
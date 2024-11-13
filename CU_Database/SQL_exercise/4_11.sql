SELECT customer_id, customer_name FROM CUSTOMER
WHERE customer_id NOT IN (
	SELECT customer_id FROM ORDERT
	GROUP BY customer_id
)
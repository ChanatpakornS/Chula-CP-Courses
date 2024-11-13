SELECT SUM(ol.ordered_quantity * p.standard_price) AS total_payment FROM ORDER_LINE ol
NATURAL JOIN PRODUCT p
WHERE order_id = 3

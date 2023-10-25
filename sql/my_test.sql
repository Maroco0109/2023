CREATE DATABASE IF NOT EXISTS MY_TEST;
USE MY_TEST;

CREATE TABLE CLASS(
    class_numb  INT         NOT NULL,
    class_name  VARCHAR(20) NOT NULL,
    class_spec  VARCHAR(20) NOT NULL,
    class_gend  VARCHAR(10) NOT NULL,
    PRIMARY KEY (class_numb)
);

SET FOREIGN_KEY_CHECKS = 0;
DROP TABLE IF EXISTS LANCE_MASTER CASCADE;
DROP TABLE IF EXISTS ENGRAVING CASCADE;
SET FOREIGN_KEY_CHECKS = 1;

CREATE TABLE ENGRAVING(
    engrave_numb    INT         NOT NULL,
    engrave_name    VARCHAR(20) NOT NULL,
    PRIMARY KEY (engrave_numb)
);

-- ENGRAVE DATA INSERT
INSERT INTO engraving
VALUES(1,"����");
INSERT INTO engraving
VALUES(2,"����");
INSERT INTO engraving
VALUES(3,"���ɼ�");
INSERT INTO engraving
VALUES(4,"��ȭ ����");
INSERT INTO engraving
VALUES(5,"��ȭ ����");
INSERT INTO engraving
VALUES(6,"������ �밡");
INSERT INTO engraving
VALUES(7,"���� ���");
INSERT INTO engraving
VALUES(8,"����");
INSERT INTO engraving
VALUES(9,"�������� ���");
INSERT INTO engraving
VALUES(10,"��������");
INSERT INTO engraving
VALUES(11,"���� ����");
INSERT INTO engraving
VALUES(12,"�׹��� ���");
INSERT INTO engraving
VALUES(13,"����: ü��");
INSERT INTO engraving
VALUES(14,"�޼� Ÿ��");
INSERT INTO engraving
VALUES(15,"����� �밡");
INSERT INTO engraving
VALUES(16,"��ޱ���");
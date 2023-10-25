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
VALUES(1,"각성");
INSERT INTO engraving
VALUES(2,"갈증");
INSERT INTO engraving
VALUES(3,"강령술");
INSERT INTO engraving
VALUES(4,"강화 무기");
INSERT INTO engraving
VALUES(5,"강화 방패");
INSERT INTO engraving
VALUES(6,"결투의 대가");
INSERT INTO engraving
VALUES(7,"고독한 기사");
INSERT INTO engraving
VALUES(8,"광기");
INSERT INTO engraving
VALUES(9,"광전사의 비기");
INSERT INTO engraving
VALUES(10,"구슬동자");
INSERT INTO engraving
VALUES(11,"굳은 의지");
INSERT INTO engraving
VALUES(12,"그믐의 경계");
INSERT INTO engraving
VALUES(13,"극의: 체술");
INSERT INTO engraving
VALUES(14,"급소 타격");
INSERT INTO engraving
VALUES(15,"기습의 대가");
INSERT INTO engraving
VALUES(16,"긴급구조");
/************************************************************************/
/*																		*/
/*								LCDMenuLib								*/
/*																		*/
/************************************************************************/
/* Autor:			Nils Feldk�mper										*/
/* Create:			03.02.2008											*/
/* Edit:			23.02.2014											*/
/************************************************************************/
/* License:			all Free											*/
/************************************************************************/

/************************************************************************/
/* Description:															*/
/* With this library, you can create menus with layers on base on the   */
/* Nested-Set-Model. For every menu element can be create a function    */
/* to control the content. This function is called automatical from the */
/* library and runs in a loop, without blocking other programm parts.   */
/*																		*/
/* Support:  -- englischen Link einf�gen --                             */
/*                                                                      */
/************************************************************************/

/************************************************************************/
/* Description (german):												*/
/* Mit der Lib k�nnen LCD Men�s �ber mehrere Ebenen mit Hilfe des   	*/
/* Nested Set Models generiert werden. Jeder Men�punkt kann mit einer   */
/* Funktion hinterlegt werden die durch die Lib aufgerufen wird, sobald */
/* der Men�punkt aktiviert wird.										*/
/*																		*/
/* Support (german):	http://forum.arduino.cc/index.php?topic=73816.0	*/
/************************************************************************/

/************************************************************************/
/* Features:															*/
/* - max 254 menu elements												*/
/* - max 254 menu elements per layer								    */
/* - max 6 layers from root, configurable in LCDMenuLib.h				*/
/* - max support for 6 buttons up, down, left, right, back/quit, enter  */
/* - min 3 buttons needed up, down, enter                               */
/* - separation of structural and functional level                      */
/* - support for initscreen which is shown after x secounds or at begin */
/* - scrollbar when more menu elments in a layer then rows              */
/* - last cursor pos is saved											*/
/* - possibility to jump from one menu elment directly to another       */
/* - support for many different lcd librarys in LCDMenuLib___config.h   */
/* - 4bit lcd support													*/
/* - 8bit lcd support													*/
/* - i2c lcd support													*/
/* - shift register lcd support											*/
/* - DogLcd support														*/
/*																		*/
/* - many small function for other things								*/
/*																		*/
/* - no support for gaphic displays yet									*/
/************************************************************************/

#ifndef LCDMenuLib_lang_repeat_h
#define LCDMenuLib_lang_repeat_h

/* ************************************************ */
/* LCDMenuLib_lang_repeat									*/
/* ************************************************ */
#define LCDMenuLib_lang_repeat_255() LCDMenuLib_lang_repeat_254() LCDMenuLib_lang(255),
#define LCDMenuLib_lang_repeat_254() LCDMenuLib_lang_repeat_253() LCDMenuLib_lang(254),
#define LCDMenuLib_lang_repeat_253() LCDMenuLib_lang_repeat_252() LCDMenuLib_lang(253),
#define LCDMenuLib_lang_repeat_252() LCDMenuLib_lang_repeat_251() LCDMenuLib_lang(252),
#define LCDMenuLib_lang_repeat_251() LCDMenuLib_lang_repeat_250() LCDMenuLib_lang(251),
#define LCDMenuLib_lang_repeat_250() LCDMenuLib_lang_repeat_249() LCDMenuLib_lang(250),
#define LCDMenuLib_lang_repeat_249() LCDMenuLib_lang_repeat_248() LCDMenuLib_lang(249),
#define LCDMenuLib_lang_repeat_248() LCDMenuLib_lang_repeat_247() LCDMenuLib_lang(248),
#define LCDMenuLib_lang_repeat_247() LCDMenuLib_lang_repeat_246() LCDMenuLib_lang(247),
#define LCDMenuLib_lang_repeat_246() LCDMenuLib_lang_repeat_245() LCDMenuLib_lang(246),
#define LCDMenuLib_lang_repeat_245() LCDMenuLib_lang_repeat_244() LCDMenuLib_lang(245),
#define LCDMenuLib_lang_repeat_244() LCDMenuLib_lang_repeat_243() LCDMenuLib_lang(244),
#define LCDMenuLib_lang_repeat_243() LCDMenuLib_lang_repeat_242() LCDMenuLib_lang(243),
#define LCDMenuLib_lang_repeat_242() LCDMenuLib_lang_repeat_241() LCDMenuLib_lang(242),
#define LCDMenuLib_lang_repeat_241() LCDMenuLib_lang_repeat_240() LCDMenuLib_lang(241),
#define LCDMenuLib_lang_repeat_240() LCDMenuLib_lang_repeat_239() LCDMenuLib_lang(240),
#define LCDMenuLib_lang_repeat_239() LCDMenuLib_lang_repeat_238() LCDMenuLib_lang(239),
#define LCDMenuLib_lang_repeat_238() LCDMenuLib_lang_repeat_237() LCDMenuLib_lang(238),
#define LCDMenuLib_lang_repeat_237() LCDMenuLib_lang_repeat_236() LCDMenuLib_lang(237),
#define LCDMenuLib_lang_repeat_236() LCDMenuLib_lang_repeat_235() LCDMenuLib_lang(236),
#define LCDMenuLib_lang_repeat_235() LCDMenuLib_lang_repeat_234() LCDMenuLib_lang(235),
#define LCDMenuLib_lang_repeat_234() LCDMenuLib_lang_repeat_233() LCDMenuLib_lang(234),
#define LCDMenuLib_lang_repeat_233() LCDMenuLib_lang_repeat_232() LCDMenuLib_lang(233),
#define LCDMenuLib_lang_repeat_232() LCDMenuLib_lang_repeat_231() LCDMenuLib_lang(232),
#define LCDMenuLib_lang_repeat_231() LCDMenuLib_lang_repeat_230() LCDMenuLib_lang(231),
#define LCDMenuLib_lang_repeat_230() LCDMenuLib_lang_repeat_229() LCDMenuLib_lang(230),
#define LCDMenuLib_lang_repeat_229() LCDMenuLib_lang_repeat_228() LCDMenuLib_lang(229),
#define LCDMenuLib_lang_repeat_228() LCDMenuLib_lang_repeat_227() LCDMenuLib_lang(228),
#define LCDMenuLib_lang_repeat_227() LCDMenuLib_lang_repeat_226() LCDMenuLib_lang(227),
#define LCDMenuLib_lang_repeat_226() LCDMenuLib_lang_repeat_225() LCDMenuLib_lang(226),
#define LCDMenuLib_lang_repeat_225() LCDMenuLib_lang_repeat_224() LCDMenuLib_lang(225),
#define LCDMenuLib_lang_repeat_224() LCDMenuLib_lang_repeat_223() LCDMenuLib_lang(224),
#define LCDMenuLib_lang_repeat_223() LCDMenuLib_lang_repeat_222() LCDMenuLib_lang(223),
#define LCDMenuLib_lang_repeat_222() LCDMenuLib_lang_repeat_221() LCDMenuLib_lang(222),
#define LCDMenuLib_lang_repeat_221() LCDMenuLib_lang_repeat_220() LCDMenuLib_lang(221),
#define LCDMenuLib_lang_repeat_220() LCDMenuLib_lang_repeat_219() LCDMenuLib_lang(220),
#define LCDMenuLib_lang_repeat_219() LCDMenuLib_lang_repeat_218() LCDMenuLib_lang(219),
#define LCDMenuLib_lang_repeat_218() LCDMenuLib_lang_repeat_217() LCDMenuLib_lang(218),
#define LCDMenuLib_lang_repeat_217() LCDMenuLib_lang_repeat_216() LCDMenuLib_lang(217),
#define LCDMenuLib_lang_repeat_216() LCDMenuLib_lang_repeat_215() LCDMenuLib_lang(216),
#define LCDMenuLib_lang_repeat_215() LCDMenuLib_lang_repeat_214() LCDMenuLib_lang(215),
#define LCDMenuLib_lang_repeat_214() LCDMenuLib_lang_repeat_213() LCDMenuLib_lang(214),
#define LCDMenuLib_lang_repeat_213() LCDMenuLib_lang_repeat_212() LCDMenuLib_lang(213),
#define LCDMenuLib_lang_repeat_212() LCDMenuLib_lang_repeat_211() LCDMenuLib_lang(212),
#define LCDMenuLib_lang_repeat_211() LCDMenuLib_lang_repeat_210() LCDMenuLib_lang(211),
#define LCDMenuLib_lang_repeat_210() LCDMenuLib_lang_repeat_209() LCDMenuLib_lang(210),
#define LCDMenuLib_lang_repeat_209() LCDMenuLib_lang_repeat_208() LCDMenuLib_lang(209),
#define LCDMenuLib_lang_repeat_208() LCDMenuLib_lang_repeat_207() LCDMenuLib_lang(208),
#define LCDMenuLib_lang_repeat_207() LCDMenuLib_lang_repeat_206() LCDMenuLib_lang(207),
#define LCDMenuLib_lang_repeat_206() LCDMenuLib_lang_repeat_205() LCDMenuLib_lang(206),
#define LCDMenuLib_lang_repeat_205() LCDMenuLib_lang_repeat_204() LCDMenuLib_lang(205),
#define LCDMenuLib_lang_repeat_204() LCDMenuLib_lang_repeat_203() LCDMenuLib_lang(204),
#define LCDMenuLib_lang_repeat_203() LCDMenuLib_lang_repeat_202() LCDMenuLib_lang(203),
#define LCDMenuLib_lang_repeat_202() LCDMenuLib_lang_repeat_201() LCDMenuLib_lang(202),
#define LCDMenuLib_lang_repeat_201() LCDMenuLib_lang_repeat_200() LCDMenuLib_lang(201),
#define LCDMenuLib_lang_repeat_200() LCDMenuLib_lang_repeat_199() LCDMenuLib_lang(200),
#define LCDMenuLib_lang_repeat_199() LCDMenuLib_lang_repeat_198() LCDMenuLib_lang(199),
#define LCDMenuLib_lang_repeat_198() LCDMenuLib_lang_repeat_197() LCDMenuLib_lang(198),
#define LCDMenuLib_lang_repeat_197() LCDMenuLib_lang_repeat_196() LCDMenuLib_lang(197),
#define LCDMenuLib_lang_repeat_196() LCDMenuLib_lang_repeat_195() LCDMenuLib_lang(196),
#define LCDMenuLib_lang_repeat_195() LCDMenuLib_lang_repeat_194() LCDMenuLib_lang(195),
#define LCDMenuLib_lang_repeat_194() LCDMenuLib_lang_repeat_193() LCDMenuLib_lang(194),
#define LCDMenuLib_lang_repeat_193() LCDMenuLib_lang_repeat_192() LCDMenuLib_lang(193),
#define LCDMenuLib_lang_repeat_192() LCDMenuLib_lang_repeat_191() LCDMenuLib_lang(192),
#define LCDMenuLib_lang_repeat_191() LCDMenuLib_lang_repeat_190() LCDMenuLib_lang(191),
#define LCDMenuLib_lang_repeat_190() LCDMenuLib_lang_repeat_189() LCDMenuLib_lang(190),
#define LCDMenuLib_lang_repeat_189() LCDMenuLib_lang_repeat_188() LCDMenuLib_lang(189),
#define LCDMenuLib_lang_repeat_188() LCDMenuLib_lang_repeat_187() LCDMenuLib_lang(188),
#define LCDMenuLib_lang_repeat_187() LCDMenuLib_lang_repeat_186() LCDMenuLib_lang(187),
#define LCDMenuLib_lang_repeat_186() LCDMenuLib_lang_repeat_185() LCDMenuLib_lang(186),
#define LCDMenuLib_lang_repeat_185() LCDMenuLib_lang_repeat_184() LCDMenuLib_lang(185),
#define LCDMenuLib_lang_repeat_184() LCDMenuLib_lang_repeat_183() LCDMenuLib_lang(184),
#define LCDMenuLib_lang_repeat_183() LCDMenuLib_lang_repeat_182() LCDMenuLib_lang(183),
#define LCDMenuLib_lang_repeat_182() LCDMenuLib_lang_repeat_181() LCDMenuLib_lang(182),
#define LCDMenuLib_lang_repeat_181() LCDMenuLib_lang_repeat_180() LCDMenuLib_lang(181),
#define LCDMenuLib_lang_repeat_180() LCDMenuLib_lang_repeat_179() LCDMenuLib_lang(180),
#define LCDMenuLib_lang_repeat_179() LCDMenuLib_lang_repeat_178() LCDMenuLib_lang(179),
#define LCDMenuLib_lang_repeat_178() LCDMenuLib_lang_repeat_177() LCDMenuLib_lang(178),
#define LCDMenuLib_lang_repeat_177() LCDMenuLib_lang_repeat_176() LCDMenuLib_lang(177),
#define LCDMenuLib_lang_repeat_176() LCDMenuLib_lang_repeat_175() LCDMenuLib_lang(176),
#define LCDMenuLib_lang_repeat_175() LCDMenuLib_lang_repeat_174() LCDMenuLib_lang(175),
#define LCDMenuLib_lang_repeat_174() LCDMenuLib_lang_repeat_173() LCDMenuLib_lang(174),
#define LCDMenuLib_lang_repeat_173() LCDMenuLib_lang_repeat_172() LCDMenuLib_lang(173),
#define LCDMenuLib_lang_repeat_172() LCDMenuLib_lang_repeat_171() LCDMenuLib_lang(172),
#define LCDMenuLib_lang_repeat_171() LCDMenuLib_lang_repeat_170() LCDMenuLib_lang(171),
#define LCDMenuLib_lang_repeat_170() LCDMenuLib_lang_repeat_169() LCDMenuLib_lang(170),
#define LCDMenuLib_lang_repeat_169() LCDMenuLib_lang_repeat_168() LCDMenuLib_lang(169),
#define LCDMenuLib_lang_repeat_168() LCDMenuLib_lang_repeat_167() LCDMenuLib_lang(168),
#define LCDMenuLib_lang_repeat_167() LCDMenuLib_lang_repeat_166() LCDMenuLib_lang(167),
#define LCDMenuLib_lang_repeat_166() LCDMenuLib_lang_repeat_165() LCDMenuLib_lang(166),
#define LCDMenuLib_lang_repeat_165() LCDMenuLib_lang_repeat_164() LCDMenuLib_lang(165),
#define LCDMenuLib_lang_repeat_164() LCDMenuLib_lang_repeat_163() LCDMenuLib_lang(164),
#define LCDMenuLib_lang_repeat_163() LCDMenuLib_lang_repeat_162() LCDMenuLib_lang(163),
#define LCDMenuLib_lang_repeat_162() LCDMenuLib_lang_repeat_161() LCDMenuLib_lang(162),
#define LCDMenuLib_lang_repeat_161() LCDMenuLib_lang_repeat_160() LCDMenuLib_lang(161),
#define LCDMenuLib_lang_repeat_160() LCDMenuLib_lang_repeat_159() LCDMenuLib_lang(160),
#define LCDMenuLib_lang_repeat_159() LCDMenuLib_lang_repeat_158() LCDMenuLib_lang(159),
#define LCDMenuLib_lang_repeat_158() LCDMenuLib_lang_repeat_157() LCDMenuLib_lang(158),
#define LCDMenuLib_lang_repeat_157() LCDMenuLib_lang_repeat_156() LCDMenuLib_lang(157),
#define LCDMenuLib_lang_repeat_156() LCDMenuLib_lang_repeat_155() LCDMenuLib_lang(156),
#define LCDMenuLib_lang_repeat_155() LCDMenuLib_lang_repeat_154() LCDMenuLib_lang(155),
#define LCDMenuLib_lang_repeat_154() LCDMenuLib_lang_repeat_153() LCDMenuLib_lang(154),
#define LCDMenuLib_lang_repeat_153() LCDMenuLib_lang_repeat_152() LCDMenuLib_lang(153),
#define LCDMenuLib_lang_repeat_152() LCDMenuLib_lang_repeat_151() LCDMenuLib_lang(152),
#define LCDMenuLib_lang_repeat_151() LCDMenuLib_lang_repeat_150() LCDMenuLib_lang(151),
#define LCDMenuLib_lang_repeat_150() LCDMenuLib_lang_repeat_149() LCDMenuLib_lang(150),
#define LCDMenuLib_lang_repeat_149() LCDMenuLib_lang_repeat_148() LCDMenuLib_lang(149),
#define LCDMenuLib_lang_repeat_148() LCDMenuLib_lang_repeat_147() LCDMenuLib_lang(148),
#define LCDMenuLib_lang_repeat_147() LCDMenuLib_lang_repeat_146() LCDMenuLib_lang(147),
#define LCDMenuLib_lang_repeat_146() LCDMenuLib_lang_repeat_145() LCDMenuLib_lang(146),
#define LCDMenuLib_lang_repeat_145() LCDMenuLib_lang_repeat_144() LCDMenuLib_lang(145),
#define LCDMenuLib_lang_repeat_144() LCDMenuLib_lang_repeat_143() LCDMenuLib_lang(144),
#define LCDMenuLib_lang_repeat_143() LCDMenuLib_lang_repeat_142() LCDMenuLib_lang(143),
#define LCDMenuLib_lang_repeat_142() LCDMenuLib_lang_repeat_141() LCDMenuLib_lang(142),
#define LCDMenuLib_lang_repeat_141() LCDMenuLib_lang_repeat_140() LCDMenuLib_lang(141),
#define LCDMenuLib_lang_repeat_140() LCDMenuLib_lang_repeat_139() LCDMenuLib_lang(140),
#define LCDMenuLib_lang_repeat_139() LCDMenuLib_lang_repeat_138() LCDMenuLib_lang(139),
#define LCDMenuLib_lang_repeat_138() LCDMenuLib_lang_repeat_137() LCDMenuLib_lang(138),
#define LCDMenuLib_lang_repeat_137() LCDMenuLib_lang_repeat_136() LCDMenuLib_lang(137),
#define LCDMenuLib_lang_repeat_136() LCDMenuLib_lang_repeat_135() LCDMenuLib_lang(136),
#define LCDMenuLib_lang_repeat_135() LCDMenuLib_lang_repeat_134() LCDMenuLib_lang(135),
#define LCDMenuLib_lang_repeat_134() LCDMenuLib_lang_repeat_133() LCDMenuLib_lang(134),
#define LCDMenuLib_lang_repeat_133() LCDMenuLib_lang_repeat_132() LCDMenuLib_lang(133),
#define LCDMenuLib_lang_repeat_132() LCDMenuLib_lang_repeat_131() LCDMenuLib_lang(132),
#define LCDMenuLib_lang_repeat_131() LCDMenuLib_lang_repeat_130() LCDMenuLib_lang(131),
#define LCDMenuLib_lang_repeat_130() LCDMenuLib_lang_repeat_129() LCDMenuLib_lang(130),
#define LCDMenuLib_lang_repeat_129() LCDMenuLib_lang_repeat_128() LCDMenuLib_lang(129),
#define LCDMenuLib_lang_repeat_128() LCDMenuLib_lang_repeat_127() LCDMenuLib_lang(128),
#define LCDMenuLib_lang_repeat_127() LCDMenuLib_lang_repeat_126() LCDMenuLib_lang(127),
#define LCDMenuLib_lang_repeat_126() LCDMenuLib_lang_repeat_125() LCDMenuLib_lang(126),
#define LCDMenuLib_lang_repeat_125() LCDMenuLib_lang_repeat_124() LCDMenuLib_lang(125),
#define LCDMenuLib_lang_repeat_124() LCDMenuLib_lang_repeat_123() LCDMenuLib_lang(124),
#define LCDMenuLib_lang_repeat_123() LCDMenuLib_lang_repeat_122() LCDMenuLib_lang(123),
#define LCDMenuLib_lang_repeat_122() LCDMenuLib_lang_repeat_121() LCDMenuLib_lang(122),
#define LCDMenuLib_lang_repeat_121() LCDMenuLib_lang_repeat_120() LCDMenuLib_lang(121),
#define LCDMenuLib_lang_repeat_120() LCDMenuLib_lang_repeat_119() LCDMenuLib_lang(120),
#define LCDMenuLib_lang_repeat_119() LCDMenuLib_lang_repeat_118() LCDMenuLib_lang(119),
#define LCDMenuLib_lang_repeat_118() LCDMenuLib_lang_repeat_117() LCDMenuLib_lang(118),
#define LCDMenuLib_lang_repeat_117() LCDMenuLib_lang_repeat_116() LCDMenuLib_lang(117),
#define LCDMenuLib_lang_repeat_116() LCDMenuLib_lang_repeat_115() LCDMenuLib_lang(116),
#define LCDMenuLib_lang_repeat_115() LCDMenuLib_lang_repeat_114() LCDMenuLib_lang(115),
#define LCDMenuLib_lang_repeat_114() LCDMenuLib_lang_repeat_113() LCDMenuLib_lang(114),
#define LCDMenuLib_lang_repeat_113() LCDMenuLib_lang_repeat_112() LCDMenuLib_lang(113),
#define LCDMenuLib_lang_repeat_112() LCDMenuLib_lang_repeat_111() LCDMenuLib_lang(112),
#define LCDMenuLib_lang_repeat_111() LCDMenuLib_lang_repeat_110() LCDMenuLib_lang(111),
#define LCDMenuLib_lang_repeat_110() LCDMenuLib_lang_repeat_109() LCDMenuLib_lang(110),
#define LCDMenuLib_lang_repeat_109() LCDMenuLib_lang_repeat_108() LCDMenuLib_lang(109),
#define LCDMenuLib_lang_repeat_108() LCDMenuLib_lang_repeat_107() LCDMenuLib_lang(108),
#define LCDMenuLib_lang_repeat_107() LCDMenuLib_lang_repeat_106() LCDMenuLib_lang(107),
#define LCDMenuLib_lang_repeat_106() LCDMenuLib_lang_repeat_105() LCDMenuLib_lang(106),
#define LCDMenuLib_lang_repeat_105() LCDMenuLib_lang_repeat_104() LCDMenuLib_lang(105),
#define LCDMenuLib_lang_repeat_104() LCDMenuLib_lang_repeat_103() LCDMenuLib_lang(104),
#define LCDMenuLib_lang_repeat_103() LCDMenuLib_lang_repeat_102() LCDMenuLib_lang(103),
#define LCDMenuLib_lang_repeat_102() LCDMenuLib_lang_repeat_101() LCDMenuLib_lang(102),
#define LCDMenuLib_lang_repeat_101() LCDMenuLib_lang_repeat_100() LCDMenuLib_lang(101),
#define LCDMenuLib_lang_repeat_100() LCDMenuLib_lang_repeat_99() LCDMenuLib_lang(100),
#define LCDMenuLib_lang_repeat_99() LCDMenuLib_lang_repeat_98() LCDMenuLib_lang(99),
#define LCDMenuLib_lang_repeat_98() LCDMenuLib_lang_repeat_97() LCDMenuLib_lang(98),
#define LCDMenuLib_lang_repeat_97() LCDMenuLib_lang_repeat_96() LCDMenuLib_lang(97),
#define LCDMenuLib_lang_repeat_96() LCDMenuLib_lang_repeat_95() LCDMenuLib_lang(96),
#define LCDMenuLib_lang_repeat_95() LCDMenuLib_lang_repeat_94() LCDMenuLib_lang(95),
#define LCDMenuLib_lang_repeat_94() LCDMenuLib_lang_repeat_93() LCDMenuLib_lang(94),
#define LCDMenuLib_lang_repeat_93() LCDMenuLib_lang_repeat_92() LCDMenuLib_lang(93),
#define LCDMenuLib_lang_repeat_92() LCDMenuLib_lang_repeat_91() LCDMenuLib_lang(92),
#define LCDMenuLib_lang_repeat_91() LCDMenuLib_lang_repeat_90() LCDMenuLib_lang(91),
#define LCDMenuLib_lang_repeat_90() LCDMenuLib_lang_repeat_89() LCDMenuLib_lang(90),
#define LCDMenuLib_lang_repeat_89() LCDMenuLib_lang_repeat_88() LCDMenuLib_lang(89),
#define LCDMenuLib_lang_repeat_88() LCDMenuLib_lang_repeat_87() LCDMenuLib_lang(88),
#define LCDMenuLib_lang_repeat_87() LCDMenuLib_lang_repeat_86() LCDMenuLib_lang(87),
#define LCDMenuLib_lang_repeat_86() LCDMenuLib_lang_repeat_85() LCDMenuLib_lang(86),
#define LCDMenuLib_lang_repeat_85() LCDMenuLib_lang_repeat_84() LCDMenuLib_lang(85),
#define LCDMenuLib_lang_repeat_84() LCDMenuLib_lang_repeat_83() LCDMenuLib_lang(84),
#define LCDMenuLib_lang_repeat_83() LCDMenuLib_lang_repeat_82() LCDMenuLib_lang(83),
#define LCDMenuLib_lang_repeat_82() LCDMenuLib_lang_repeat_81() LCDMenuLib_lang(82),
#define LCDMenuLib_lang_repeat_81() LCDMenuLib_lang_repeat_80() LCDMenuLib_lang(81),
#define LCDMenuLib_lang_repeat_80() LCDMenuLib_lang_repeat_79() LCDMenuLib_lang(80),
#define LCDMenuLib_lang_repeat_79() LCDMenuLib_lang_repeat_78() LCDMenuLib_lang(79),
#define LCDMenuLib_lang_repeat_78() LCDMenuLib_lang_repeat_77() LCDMenuLib_lang(78),
#define LCDMenuLib_lang_repeat_77() LCDMenuLib_lang_repeat_76() LCDMenuLib_lang(77),
#define LCDMenuLib_lang_repeat_76() LCDMenuLib_lang_repeat_75() LCDMenuLib_lang(76),
#define LCDMenuLib_lang_repeat_75() LCDMenuLib_lang_repeat_74() LCDMenuLib_lang(75),
#define LCDMenuLib_lang_repeat_74() LCDMenuLib_lang_repeat_73() LCDMenuLib_lang(74),
#define LCDMenuLib_lang_repeat_73() LCDMenuLib_lang_repeat_72() LCDMenuLib_lang(73),
#define LCDMenuLib_lang_repeat_72() LCDMenuLib_lang_repeat_71() LCDMenuLib_lang(72),
#define LCDMenuLib_lang_repeat_71() LCDMenuLib_lang_repeat_70() LCDMenuLib_lang(71),
#define LCDMenuLib_lang_repeat_70() LCDMenuLib_lang_repeat_69() LCDMenuLib_lang(70),
#define LCDMenuLib_lang_repeat_69() LCDMenuLib_lang_repeat_68() LCDMenuLib_lang(69),
#define LCDMenuLib_lang_repeat_68() LCDMenuLib_lang_repeat_67() LCDMenuLib_lang(68),
#define LCDMenuLib_lang_repeat_67() LCDMenuLib_lang_repeat_66() LCDMenuLib_lang(67),
#define LCDMenuLib_lang_repeat_66() LCDMenuLib_lang_repeat_65() LCDMenuLib_lang(66),
#define LCDMenuLib_lang_repeat_65() LCDMenuLib_lang_repeat_64() LCDMenuLib_lang(65),
#define LCDMenuLib_lang_repeat_64() LCDMenuLib_lang_repeat_63() LCDMenuLib_lang(64),
#define LCDMenuLib_lang_repeat_63() LCDMenuLib_lang_repeat_62() LCDMenuLib_lang(63),
#define LCDMenuLib_lang_repeat_62() LCDMenuLib_lang_repeat_61() LCDMenuLib_lang(62),
#define LCDMenuLib_lang_repeat_61() LCDMenuLib_lang_repeat_60() LCDMenuLib_lang(61),
#define LCDMenuLib_lang_repeat_60() LCDMenuLib_lang_repeat_59() LCDMenuLib_lang(60),
#define LCDMenuLib_lang_repeat_59() LCDMenuLib_lang_repeat_58() LCDMenuLib_lang(59),
#define LCDMenuLib_lang_repeat_58() LCDMenuLib_lang_repeat_57() LCDMenuLib_lang(58),
#define LCDMenuLib_lang_repeat_57() LCDMenuLib_lang_repeat_56() LCDMenuLib_lang(57),
#define LCDMenuLib_lang_repeat_56() LCDMenuLib_lang_repeat_55() LCDMenuLib_lang(56),
#define LCDMenuLib_lang_repeat_55() LCDMenuLib_lang_repeat_54() LCDMenuLib_lang(55),
#define LCDMenuLib_lang_repeat_54() LCDMenuLib_lang_repeat_53() LCDMenuLib_lang(54),
#define LCDMenuLib_lang_repeat_53() LCDMenuLib_lang_repeat_52() LCDMenuLib_lang(53),
#define LCDMenuLib_lang_repeat_52() LCDMenuLib_lang_repeat_51() LCDMenuLib_lang(52),
#define LCDMenuLib_lang_repeat_51() LCDMenuLib_lang_repeat_50() LCDMenuLib_lang(51),
#define LCDMenuLib_lang_repeat_50() LCDMenuLib_lang_repeat_49() LCDMenuLib_lang(50),
#define LCDMenuLib_lang_repeat_49() LCDMenuLib_lang_repeat_48() LCDMenuLib_lang(49),
#define LCDMenuLib_lang_repeat_48() LCDMenuLib_lang_repeat_47() LCDMenuLib_lang(48),
#define LCDMenuLib_lang_repeat_47() LCDMenuLib_lang_repeat_46() LCDMenuLib_lang(47),
#define LCDMenuLib_lang_repeat_46() LCDMenuLib_lang_repeat_45() LCDMenuLib_lang(46),
#define LCDMenuLib_lang_repeat_45() LCDMenuLib_lang_repeat_44() LCDMenuLib_lang(45),
#define LCDMenuLib_lang_repeat_44() LCDMenuLib_lang_repeat_43() LCDMenuLib_lang(44),
#define LCDMenuLib_lang_repeat_43() LCDMenuLib_lang_repeat_42() LCDMenuLib_lang(43),
#define LCDMenuLib_lang_repeat_42() LCDMenuLib_lang_repeat_41() LCDMenuLib_lang(42),
#define LCDMenuLib_lang_repeat_41() LCDMenuLib_lang_repeat_40() LCDMenuLib_lang(41),
#define LCDMenuLib_lang_repeat_40() LCDMenuLib_lang_repeat_39() LCDMenuLib_lang(40),
#define LCDMenuLib_lang_repeat_39() LCDMenuLib_lang_repeat_38() LCDMenuLib_lang(39),
#define LCDMenuLib_lang_repeat_38() LCDMenuLib_lang_repeat_37() LCDMenuLib_lang(38),
#define LCDMenuLib_lang_repeat_37() LCDMenuLib_lang_repeat_36() LCDMenuLib_lang(37),
#define LCDMenuLib_lang_repeat_36() LCDMenuLib_lang_repeat_35() LCDMenuLib_lang(36),
#define LCDMenuLib_lang_repeat_35() LCDMenuLib_lang_repeat_34() LCDMenuLib_lang(35),
#define LCDMenuLib_lang_repeat_34() LCDMenuLib_lang_repeat_33() LCDMenuLib_lang(34),
#define LCDMenuLib_lang_repeat_33() LCDMenuLib_lang_repeat_32() LCDMenuLib_lang(33),
#define LCDMenuLib_lang_repeat_32() LCDMenuLib_lang_repeat_31() LCDMenuLib_lang(32),
#define LCDMenuLib_lang_repeat_31() LCDMenuLib_lang_repeat_30() LCDMenuLib_lang(31),
#define LCDMenuLib_lang_repeat_30() LCDMenuLib_lang_repeat_29() LCDMenuLib_lang(30),
#define LCDMenuLib_lang_repeat_29() LCDMenuLib_lang_repeat_28() LCDMenuLib_lang(29),
#define LCDMenuLib_lang_repeat_28() LCDMenuLib_lang_repeat_27() LCDMenuLib_lang(28),
#define LCDMenuLib_lang_repeat_27() LCDMenuLib_lang_repeat_26() LCDMenuLib_lang(27),
#define LCDMenuLib_lang_repeat_26() LCDMenuLib_lang_repeat_25() LCDMenuLib_lang(26),
#define LCDMenuLib_lang_repeat_25() LCDMenuLib_lang_repeat_24() LCDMenuLib_lang(25),
#define LCDMenuLib_lang_repeat_24() LCDMenuLib_lang_repeat_23() LCDMenuLib_lang(24),
#define LCDMenuLib_lang_repeat_23() LCDMenuLib_lang_repeat_22() LCDMenuLib_lang(23),
#define LCDMenuLib_lang_repeat_22() LCDMenuLib_lang_repeat_21() LCDMenuLib_lang(22),
#define LCDMenuLib_lang_repeat_21() LCDMenuLib_lang_repeat_20() LCDMenuLib_lang(21),
#define LCDMenuLib_lang_repeat_20() LCDMenuLib_lang_repeat_19() LCDMenuLib_lang(20),
#define LCDMenuLib_lang_repeat_19() LCDMenuLib_lang_repeat_18() LCDMenuLib_lang(19),
#define LCDMenuLib_lang_repeat_18() LCDMenuLib_lang_repeat_17() LCDMenuLib_lang(18),
#define LCDMenuLib_lang_repeat_17() LCDMenuLib_lang_repeat_16() LCDMenuLib_lang(17),
#define LCDMenuLib_lang_repeat_16() LCDMenuLib_lang_repeat_15() LCDMenuLib_lang(16),
#define LCDMenuLib_lang_repeat_15() LCDMenuLib_lang_repeat_14() LCDMenuLib_lang(15),
#define LCDMenuLib_lang_repeat_14() LCDMenuLib_lang_repeat_13() LCDMenuLib_lang(14),
#define LCDMenuLib_lang_repeat_13() LCDMenuLib_lang_repeat_12() LCDMenuLib_lang(13),
#define LCDMenuLib_lang_repeat_12() LCDMenuLib_lang_repeat_11() LCDMenuLib_lang(12),
#define LCDMenuLib_lang_repeat_11() LCDMenuLib_lang_repeat_10() LCDMenuLib_lang(11),
#define LCDMenuLib_lang_repeat_10() LCDMenuLib_lang_repeat_9() LCDMenuLib_lang(10),
#define LCDMenuLib_lang_repeat_9() LCDMenuLib_lang_repeat_8() LCDMenuLib_lang(9),
#define LCDMenuLib_lang_repeat_8() LCDMenuLib_lang_repeat_7() LCDMenuLib_lang(8),
#define LCDMenuLib_lang_repeat_7() LCDMenuLib_lang_repeat_6() LCDMenuLib_lang(7),
#define LCDMenuLib_lang_repeat_6() LCDMenuLib_lang_repeat_5() LCDMenuLib_lang(6),
#define LCDMenuLib_lang_repeat_5() LCDMenuLib_lang_repeat_4() LCDMenuLib_lang(5),
#define LCDMenuLib_lang_repeat_4() LCDMenuLib_lang_repeat_3() LCDMenuLib_lang(4),
#define LCDMenuLib_lang_repeat_3() LCDMenuLib_lang_repeat_2() LCDMenuLib_lang(3),
#define LCDMenuLib_lang_repeat_2() LCDMenuLib_lang_repeat_1() LCDMenuLib_lang(2),
#define LCDMenuLib_lang_repeat_1() LCDMenuLib_lang_repeat_0() LCDMenuLib_lang(1), 
#define LCDMenuLib_lang_repeat_0() LCDMenuLib_lang(0), 
#define LCDMenuLib_lang_repeat(N) LCDMenuLib_lang_repeat_##N ()

#endif
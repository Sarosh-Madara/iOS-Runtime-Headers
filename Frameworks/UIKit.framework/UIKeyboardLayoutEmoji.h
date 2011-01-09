/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardEmojiCategoryController, UIView, UIButton, UIKeyboardEmojiFactory, UIKeyboardEmojiRecentsController, UIKeyboardEmojiScrollView, UIKeyboardEmojiCategoriesControl;



@interface UIKeyboardLayoutEmoji : UIKeyboardLayout <UIKeyboardEmojiController>
{
    UIKeyboardEmojiScrollView *_emojiView;
    UIButton *_globeButton;
    UIButton *_deleteButton;
    UIKeyboardEmojiCategoriesControl *_categoriesView;
    UIView *_adapter;
    UIKeyboardEmojiFactory *_emojiFactory;
    UIKeyboardEmojiRecentsController *_recentsController;
    UIKeyboardEmojiCategoryController *_categoryController;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)deactivateActiveKeys;
- (id)defaultsDictionary;
- (id)emojiForCodePoint:(id)arg1;
- (void)emojiSelected:(id)arg1;
- (id)recents;
- (void)save:(id)arg1;
- (void)globeDown;
- (void)globeSwitch;
- (void)deleteBegin;
- (void)deleteEnd;
- (BOOL)shouldShowIndicator;
- (void)categoryChangedNoSounds;
- (void)showKeyboardType:(NSInteger)arg1 withAppearance:(NSInteger)arg2;
- (void)categoryChanged;
- (void)categoryReselected;

@end
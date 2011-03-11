/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class PSSpecifier, NSString, NSArray;

@interface AccountSettingsUIAccountAddType : NSObject  {
    PSSpecifier *_specifier;
    NSArray *_dataclasses;
    NSString *_otherDataclassHeader;
}

@property(retain) NSString * otherDataclassHeader;
@property(retain) NSArray * dataclasses;
@property(retain) PSSpecifier * specifier;


- (id)initWithSpecifier:(id)arg1 dataclasses:(id)arg2;
- (id)initWithSpecifier:(id)arg1 dataclasses:(id)arg2 otherDataclassHeader:(id)arg3;
- (id)dataclasses;
- (void)setDataclasses:(id)arg1;
- (id)specifier;
- (void)setSpecifier:(id)arg1;
- (void)dealloc;
- (id)otherDataclassHeader;
- (void)setOtherDataclassHeader:(id)arg1;

@end
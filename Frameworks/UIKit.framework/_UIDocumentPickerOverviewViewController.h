/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIDocumentPickerOverviewDelegate>, NSArray, NSString;

@interface _UIDocumentPickerOverviewViewController : UITableViewController {
    NSArray *_allPickers;
    NSArray *_auxiliaryOptions;
    NSString *_currentExtensionIdentifier;
    <_UIDocumentPickerOverviewDelegate> *_weak_delegate;
}

@property(retain) NSArray * allPickers;
@property(retain) NSArray * auxiliaryOptions;
@property(retain) NSString * currentExtensionIdentifier;
@property <_UIDocumentPickerOverviewDelegate> * delegate;

- (id)allPickers;
- (id)auxiliaryOptions;
- (id)currentExtensionIdentifier;
- (void)dealloc;
- (id)delegate;
- (id)initWithFileTypes:(id)arg1 mode:(unsigned int)arg2 auxiliaryOptions:(id)arg3 includeManagementItem:(BOOL)arg4;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setAllPickers:(id)arg1;
- (void)setAuxiliaryOptions:(id)arg1;
- (void)setCurrentExtensionIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

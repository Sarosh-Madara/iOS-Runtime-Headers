/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString;

@interface TSWPBibliographySmartField : TSWPSmartField <TSWPCitationRecordHosting> {
    NSArray *_citationRecords;
    BOOL _isLocalizable;
}

@property(copy) NSArray * citationRecords;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL isLocalizable;
@property(readonly) Class superclass;

+ (BOOL)isValidBibliographyField:(id)arg1;

- (BOOL)allowsPasteAsSmartField;
- (id)citationRecords;
- (id)citationSmartFields;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (BOOL)isLocalizable;
- (void)saveToArchiver:(id)arg1;
- (void)setCitationRecords:(id)arg1;
- (void)setIsLocalizable:(BOOL)arg1;
- (int)smartFieldKind;

@end

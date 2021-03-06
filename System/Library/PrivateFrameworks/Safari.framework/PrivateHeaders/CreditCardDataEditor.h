//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/SheetWithTableController.h>

#import "CreditCardDataEditorCellViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "PanelPlusDelegate.h"

@class NSArray, NSButton, SFAuthorization;

__attribute__((visibility("hidden")))
@interface CreditCardDataEditor : SheetWithTableController <PanelPlusDelegate, CreditCardDataEditorCellViewDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    BOOL _shouldPreventResigningFirstResponder;
    unsigned long long _ignoringCreditCardDataChangeNotifications;
    NSButton *_addCreditCardButton;
    NSArray *_creditCardData;
    SFAuthorization *_showCardNumbersAuthorization;
}

+ (id)_creditCardIconForNumberAllowingPartialMatch:(id)arg1;
@property(retain, nonatomic) SFAuthorization *showCardNumbersAuthorization; // @synthesize showCardNumbersAuthorization=_showCardNumbersAuthorization;
@property(copy, nonatomic) NSArray *creditCardData; // @synthesize creditCardData=_creditCardData;
@property(nonatomic) NSButton *addCreditCardButton; // @synthesize addCreditCardButton=_addCreditCardButton;
- (void)creditCardDataEditorCellView:(id)arg1 willAbortEditingForTextFieldWithIdentifier:(id)arg2;
- (void)creditCardDataEditorCellView:(id)arg1 didSetObjectValue:(id)arg2 forTextFieldWithIdentifier:(id)arg3;
- (void)creditCardDataEditorCellView:(id)arg1 textDidChangeInFieldEditor:(id)arg2 forTextFieldWithIdentifier:(id)arg3;
- (BOOL)creditCardDataEditorCellView:(id)arg1 shouldEndEditingTextInFieldEditor:(id)arg2 forTextFieldWithIdentifier:(id)arg3;
- (BOOL)panelPlus:(id)arg1 shouldMakeFirstResponder:(id)arg2;
- (BOOL)_isCreditCardNumberTextField:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_updateCreditCard:(id)arg1 withCreditCardData:(id)arg2;
- (BOOL)_shouldSetNumberOfCreditCardData:(id)arg1 toCreditCardNumber:(id)arg2;
- (id)_indexesOfCreditCardsWithNumber:(id)arg1 excludingCard:(id)arg2;
- (id)_expirationDateForDate:(id)arg1;
- (void)_performBlockIgnoringCreditCardDataChangeNotifications:(CDUnknownBlockType)arg1;
- (void)addCreditCard:(id)arg1;
- (BOOL)_canShowCardNumbers;
- (BOOL)_showCardNumbersRightExists;
- (void)removeSelectedItems:(id)arg1;
- (void)_removeCreditCardsAtIndexes:(id)arg1;
- (void)hideSheet:(id)arg1;
- (void)showSheetInWindow:(id)arg1;
- (void)dealloc;
- (void)unregisterForNotifications;
- (void)registerForNotifications;
- (void)creditCardDataChanged;
- (void)resetCreditCardData;
- (id)windowNibName;

@end


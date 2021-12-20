//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGTokenFieldDelegate-Protocol.h>

@class IGDirectNicknameManager, IGDirectRecipientCellViewModel, IGTokenField, NSOrderedSet, NSString;
@protocol IGDirectThreadCreationTokenFieldControllerDelegate;

@interface IGDirectThreadCreationTokenFieldController : NSObject <IGTokenFieldDelegate>
{
    IGTokenField *_searchField;
    IGDirectRecipientCellViewModel *_matchedRecipientCellViewModel;
    _Bool _typeaheadEnabled;
    IGDirectNicknameManager *_nicknameManager;
    _Bool _allowGroupSearch;
    NSOrderedSet *_currentSelectedRecipients;
    _Bool _didAddRecipient;
    id <IGDirectThreadCreationTokenFieldControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool didAddRecipient; // @synthesize didAddRecipient=_didAddRecipient;
@property(nonatomic) __weak id <IGDirectThreadCreationTokenFieldControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)tokenField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)tokenField:(id)arg1 didChangeHeight:(double)arg2;
- (void)tokenField:(id)arg1 didTypeExistingQuery:(id)arg2;
- (void)tokenField:(id)arg1 triedTypingQuery:(id)arg2;
- (void)tokenField:(id)arg1 didPressReturnWithQuery:(id)arg2;
- (void)tokenFieldWillBeginEditing:(id)arg1;
- (void)tokenFieldDidBeginEditing:(id)arg1;
- (void)tokenField:(id)arg1 willFocusTokenView:(id)arg2;
- (void)tokenField:(id)arg1 didDeleteToken:(id)arg2;
- (void)tokenField:(id)arg1 didChangeQuery:(id)arg2;
- (_Bool)tokenFieldCanFinishEditing:(id)arg1;
- (id)_userTokenFromDirectRecipient:(id)arg1;
- (struct _NSRange)_searchQueryRangeFromString:(id)arg1;
- (void)updateCurrentSelectedRecipients:(id)arg1;
- (void)updateTypeaheadForRecipientCellViewModel:(id)arg1;
- (_Bool)tokenSearchFieldQueryMatchesRecipient:(id)arg1 selectedRecipients:(id)arg2;
- (void)updateTokenFieldSearchQuery:(id)arg1;
- (id)tokenFieldQuery;
- (void)removeRecipient:(id)arg1 animated:(_Bool)arg2;
- (void)addRecipient:(id)arg1 animated:(_Bool)arg2;
- (void)tokenFieldViewResignFirstResponder;
- (void)tokenFieldViewBecomeFirstResponder;
- (id)userSearchTokenFieldView;
- (id)initWithTokenFieldTheme:(id)arg1 nicknameManager:(id)arg2 allowGroupSearch:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


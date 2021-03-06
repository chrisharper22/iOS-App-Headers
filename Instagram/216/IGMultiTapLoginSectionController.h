//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGLoginAccountCellDelegate-Protocol.h"

@class IGLoginAccount, IGRegistrationLogger, NSString;
@protocol IGMultiTapLoginSectionControllerDelegate;

@interface IGMultiTapLoginSectionController : IGListSectionController <IGLoginAccountCellDelegate>
{
    IGLoginAccount *_account;
    IGRegistrationLogger *_logger;
    NSString *_stepName;
    unsigned long long _numAccounts;
    _Bool _editMode;
    unsigned long long _index;
    id <IGMultiTapLoginSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGMultiTapLoginSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (void)_logOneTapLoginAccountClicked;
- (void)loginAccountCellDidTapRemoveButton:(id)arg1;
- (void)didUnhighlightItemAtIndex:(long long)arg1;
- (void)didHighlightItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (struct UIEdgeInsets)inset;
- (id)initWithLogger:(id)arg1 index:(unsigned long long)arg2 numAccounts:(unsigned long long)arg3 editMode:(_Bool)arg4 stepName:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


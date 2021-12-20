//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGSuggestionsUnitActionCardCellDelegate-Protocol.h"
#import "IGSuggestionsUnitActionHandlerDelegate-Protocol.h"

@class IGHScrollActionCardModel, IGListAdapter, IGSuggestionsUnitActionCardViewModel, IGSuggestionsUnitLogger, NSMutableDictionary, NSString;
@protocol IGSuggestionsUnitActionCardSectionControllerDelegate;

@interface IGSuggestionsUnitActionCardSectionController : IGListSectionController <IGSuggestionsUnitActionCardCellDelegate, IGSuggestionsUnitActionHandlerDelegate>
{
    IGSuggestionsUnitActionCardViewModel *_actionCardViewModel;
    IGHScrollActionCardModel *_actionCardModel;
    NSMutableDictionary *_actionHandlers;
    IGListAdapter *_listAdapter;
    IGSuggestionsUnitLogger *_logger;
    id <IGSuggestionsUnitActionCardSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSuggestionsUnitActionCardSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_actionHandlerForActionCardType:(unsigned long long)arg1;
- (void)registerActionHandler:(id)arg1 forActionCardType:(unsigned long long)arg2;
- (void)suggestionsUnitUserCardDidTapDismissButton:(id)arg1;
- (void)suggestionsUnitActionCardCelldidTapActionCardButton:(id)arg1;
- (void)actionHandlerDidCompleteAction:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithListAdapter:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <FBSharedFramework/IGSearchCollectionViewCellDelegate-Protocol.h>
#import <FBSharedFramework/IGSearchCollectionViewCellTouchDelegate-Protocol.h>

@class IGSearchResultViewModel, IGSearchSectionRowPair, IGUserSession, NSString;
@protocol IGSearchHideHelperProtocol, IGSearchResultSectionControllerDelegate, IGSearchResultSectionControllerLoggingProvider, IGSearchResultSectionControllerPositionProvider, IGSearchResultSectionControllerSearchClickProvider;

@interface IGSearchResultSectionController : IGListSectionController <IGSearchCollectionViewCellDelegate, IGSearchCollectionViewCellTouchDelegate>
{
    IGUserSession *_userSession;
    long long _entryPoint;
    IGSearchResultViewModel *_viewModel;
    id <IGSearchResultSectionControllerLoggingProvider> _loggingProvider;
    id <IGSearchResultSectionControllerPositionProvider> _positionProvider;
    id <IGSearchResultSectionControllerSearchClickProvider> _searchClickProvider;
    id <IGSearchHideHelperProtocol> _itemHidingHelper;
    id <IGSearchResultSectionControllerDelegate> _delegate;
    IGSearchSectionRowPair *_sectionRowPair;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSearchSectionRowPair *sectionRowPair; // @synthesize sectionRowPair=_sectionRowPair;
@property(nonatomic) __weak id <IGSearchResultSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isNormalSearch;
- (_Bool)_canMakeCellNonMentionable;
- (void)_clearUnseenPostCountOnUserIfNeccesary;
- (_Bool)_shouldShowDismissButtonForViewModel:(id)arg1;
- (void)searchCollectionViewCell:(id)arg1 didReceiveTouch:(unsigned long long)arg2;
- (void)searchCollectionViewCellDidTapCellDestructionButton:(id)arg1 viewModel:(id)arg2;
- (void)searchCollectionViewCellDidTapCellButton:(id)arg1 viewModel:(id)arg2;
- (void)searchCollectionViewCellDidTapAvatar:(id)arg1 viewModel:(id)arg2;
- (id)workingRangeDelegate;
- (id)displayDelegate;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 entrypoint:(long long)arg2 loggingProvider:(id)arg3 positionProvider:(id)arg4 searchClickProvider:(id)arg5 itemHidingHelper:(id)arg6 delegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


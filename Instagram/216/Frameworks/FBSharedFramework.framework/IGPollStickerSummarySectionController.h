//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <FBSharedFramework/IGPollStickerSummaryViewDelegate-Protocol.h>

@class IGPollStickerModel, NSString;
@protocol IGPollStickerSummarySectionControllerDelegate;

@interface IGPollStickerSummarySectionController : IGListSectionController <IGPollStickerSummaryViewDelegate>
{
    _Bool _isShareButtonHidden;
    id <IGPollStickerSummarySectionControllerDelegate> _delegate;
    IGPollStickerModel *_model;
    struct CGSize _cachedSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isShareButtonHidden; // @synthesize isShareButtonHidden=_isShareButtonHidden;
@property(readonly, nonatomic) struct CGSize cachedSize; // @synthesize cachedSize=_cachedSize;
@property(readonly, nonatomic) IGPollStickerModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <IGPollStickerSummarySectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pollStickerSummaryView:(id)arg1 didTapVoteOption:(long long)arg2;
- (void)pollStickerSummaryView:(id)arg1 didTapShareButton:(id)arg2;
- (void)didDeselectItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithIsShareButtonHidden:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


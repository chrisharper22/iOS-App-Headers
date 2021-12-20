//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <FBSharedFramework/IGStoryStandaloneFundraiserCollectionViewCellDelegate-Protocol.h>

@class IGStoryStandaloneFundraiserListItemModel, NSString;
@protocol IGStoryStandaloneFundraiserSectionControllerDelegate;

@interface IGStoryStandaloneFundraiserSectionController : IGListSectionController <IGStoryStandaloneFundraiserCollectionViewCellDelegate>
{
    IGStoryStandaloneFundraiserListItemModel *_stickerModel;
    id <IGStoryStandaloneFundraiserSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryStandaloneFundraiserSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)standaloneFundraiserCollectionViewCellDidTapMoreButton:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


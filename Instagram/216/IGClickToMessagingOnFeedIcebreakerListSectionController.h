//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGClickToMessagingOnFeedIcebreakerCellDelegate-Protocol.h"

@class NSString;
@protocol IGClickToMessagingOnFeedIcebreakerListSectionControllerDelegate;

@interface IGClickToMessagingOnFeedIcebreakerListSectionController : IGListGenericSectionController <IGClickToMessagingOnFeedIcebreakerCellDelegate>
{
    id <IGClickToMessagingOnFeedIcebreakerListSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGClickToMessagingOnFeedIcebreakerListSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logImpressionForIceBreakers;
- (void)icebreakerCellDidTapCell:(id)arg1;
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


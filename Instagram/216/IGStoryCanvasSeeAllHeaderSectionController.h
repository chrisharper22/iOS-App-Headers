//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGStoryCanvasSeeAllHeaderCellDelegate-Protocol.h"

@class IGStoryCanvasSeeAllHeaderConfig, NSString;
@protocol IGStoryCanvasSeeAllHeaderSectionControllerDelegate;

@interface IGStoryCanvasSeeAllHeaderSectionController : IGListSectionController <IGStoryCanvasSeeAllHeaderCellDelegate>
{
    IGStoryCanvasSeeAllHeaderConfig *_headerConfig;
    struct CGSize _cellSize;
    id <IGStoryCanvasSeeAllHeaderSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryCanvasSeeAllHeaderSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)seeAllHeaderCellDidTapCancelButton:(id)arg1;
- (void)didDeselectItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


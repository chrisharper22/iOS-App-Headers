//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGInsightsMediaThumbnailsViewModel;
@protocol IGInsightsMediaThumbnailsSectionControllerDelegate;

@interface IGInsightsMediaThumbnailsSectionController : IGListSectionController
{
    IGInsightsMediaThumbnailsViewModel *_viewModel;
    id <IGInsightsMediaThumbnailsSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGInsightsMediaThumbnailsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <IGInsightsMediaThumbnailsSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithLauncherSet:(id)arg1;

@end

//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGTaggingSearchDetailedNoResultViewModel;

@interface IGTaggingSearchDetailedNoResultSectionController : IGListSectionController
{
    IGTaggingSearchDetailedNoResultViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTaggingSearchDetailedNoResultViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)workingRangeDelegate;
- (id)displayDelegate;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

@end

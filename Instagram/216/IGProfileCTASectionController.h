//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGProfileCTAViewModel;
@protocol IGProfileLayoutMetrics;

@interface IGProfileCTASectionController : IGListSectionController
{
    IGProfileCTAViewModel *_viewModel;
    id <IGProfileLayoutMetrics> _layoutMetrics;
}

- (void).cxx_destruct;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithLayoutMetrics:(id)arg1;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

@class NSString;
@protocol IGLiveShoppingPivotSectionControllerDelegate;

@interface IGLiveShoppingPivotSectionController : IGListGenericSectionController
{
    id <IGLiveShoppingPivotSectionControllerDelegate> _delegate;
    unsigned long long _destination;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)initWithDelegate:(id)arg1 analyticsModule:(id)arg2;

@end


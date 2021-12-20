//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

@class NSString;
@protocol IGLiveArchiveBroadcastSectionControllerDelegate;

@interface IGLiveArchiveBroadcastSectionController : IGListGenericSectionController
{
    NSString *_analyticModule;
    struct IGGridLayoutConfiguration _layoutConfiguration;
    id <IGLiveArchiveBroadcastSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveArchiveBroadcastSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)initWithLayoutConfiguration:(struct IGGridLayoutConfiguration)arg1 analyticsModule:(id)arg2;

@end


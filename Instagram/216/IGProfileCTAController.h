//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedScrollViewAnnouncer, IGFeedScrollViewCTAController;
@protocol IGCTAPresenterType;

@interface IGProfileCTAController : NSObject
{
    id <IGCTAPresenterType> _presenter;
    IGFeedScrollViewCTAController *_feedScrollViewCTAController;
    long long _bottomCTAType;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGFeedScrollViewAnnouncer *scrollViewAnnouncer; // @synthesize scrollViewAnnouncer=_scrollViewAnnouncer;
- (void)displayInViewController:(id)arg1 inScrollView:(id)arg2 scrollViewAnnouncer:(id)arg3 presentationPosition:(unsigned long long)arg4 layoutMetrics:(id)arg5 lifecycleTime:(unsigned long long)arg6;
- (id)initWithView:(id)arg1 module:(id)arg2 midRollCTAType:(id)arg3 bottomCTAType:(long long)arg4 delegate:(id)arg5;
- (id)initWithCTAPresenterContext:(id)arg1 module:(id)arg2 midRollCTAType:(id)arg3 delegate:(id)arg4;

@end

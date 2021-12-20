//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGSundialFeedSource;

@interface IGSundialRoutingParams : NSObject
{
    _Bool _autoAdvanceToNextItem;
    id <IGSundialFeedSource> _feedSource;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool autoAdvanceToNextItem; // @synthesize autoAdvanceToNextItem=_autoAdvanceToNextItem;
@property(readonly, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) id <IGSundialFeedSource> feedSource; // @synthesize feedSource=_feedSource;
- (id)initWithFeedSource:(id)arg1 analyticsModule:(id)arg2 autoAdvanceToNextItem:(_Bool)arg3;

@end

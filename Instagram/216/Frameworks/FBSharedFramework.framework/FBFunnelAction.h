//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBFunnelPayload, NSString;

@interface FBFunnelAction : NSObject
{
    NSString *_actionName;
    NSString *_tag;
    double _relativeTime;
    FBFunnelPayload *_actionPayload;
}

+ (id)dictionaryToObject:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBFunnelPayload *actionPayload; // @synthesize actionPayload=_actionPayload;
@property(readonly, nonatomic) double relativeTime; // @synthesize relativeTime=_relativeTime;
@property(readonly, copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
- (id)toDictAsPigeonExtra;
- (id)objectToDictionary;
- (id)initWithActionName:(id)arg1 tag:(id)arg2 relativeTime:(double)arg3 actionPayload:(id)arg4;

@end


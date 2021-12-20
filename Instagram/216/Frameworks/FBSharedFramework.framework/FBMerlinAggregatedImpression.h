//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol NSObject;

@interface FBMerlinAggregatedImpression : NSObject
{
    NSString *_origin;
    NSString *_sessionId;
    NSString *_itemId;
    NSArray *_vpvEntries;
    id <NSObject> _extraData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSObject> extraData; // @synthesize extraData=_extraData;
@property(readonly, nonatomic) NSArray *vpvEntries; // @synthesize vpvEntries=_vpvEntries;
@property(readonly, copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSString *origin; // @synthesize origin=_origin;
- (id)initWithOrigin:(id)arg1 sessionId:(id)arg2 itemId:(id)arg3 vpvEntries:(id)arg4 extraData:(id)arg5;

@end


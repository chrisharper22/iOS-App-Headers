//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol NSObject;

@interface FBMerlinRawImpression : NSObject
{
    float _percent;
    NSString *_itemId;
    long long _status;
    NSDate *_time;
    id <NSObject> _extraData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSObject> extraData; // @synthesize extraData=_extraData;
@property(readonly, copy, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) float percent; // @synthesize percent=_percent;
@property(readonly, copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (id)initWithItemId:(id)arg1 percent:(float)arg2 status:(long long)arg3 time:(id)arg4 extraData:(id)arg5;

@end

//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBGeneralImpressionData : FBValueObject <NSCopying, NSCoding>
{
    NSString *_impressionSessionId;
    unsigned long long _totalDurationMs;
    unsigned long long _maxDurationMs;
    unsigned long long _firstDurationMs;
    unsigned long long _lastDurationMs;
    unsigned long long _subImpressionCount;
    NSString *_clickSessionId;
    id _rawImpressionInfo;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id rawImpressionInfo; // @synthesize rawImpressionInfo=_rawImpressionInfo;
@property(readonly, copy, nonatomic) NSString *clickSessionId; // @synthesize clickSessionId=_clickSessionId;
@property(readonly, nonatomic) unsigned long long subImpressionCount; // @synthesize subImpressionCount=_subImpressionCount;
@property(readonly, nonatomic) unsigned long long lastDurationMs; // @synthesize lastDurationMs=_lastDurationMs;
@property(readonly, nonatomic) unsigned long long firstDurationMs; // @synthesize firstDurationMs=_firstDurationMs;
@property(readonly, nonatomic) unsigned long long maxDurationMs; // @synthesize maxDurationMs=_maxDurationMs;
@property(readonly, nonatomic) unsigned long long totalDurationMs; // @synthesize totalDurationMs=_totalDurationMs;
@property(readonly, copy, nonatomic) NSString *impressionSessionId; // @synthesize impressionSessionId=_impressionSessionId;
- (id)initWithImpressionSessionId:(id)arg1 totalDurationMs:(unsigned long long)arg2 maxDurationMs:(unsigned long long)arg3 firstDurationMs:(unsigned long long)arg4 lastDurationMs:(unsigned long long)arg5 subImpressionCount:(unsigned long long)arg6 clickSessionId:(id)arg7 rawImpressionInfo:(id)arg8;

@end

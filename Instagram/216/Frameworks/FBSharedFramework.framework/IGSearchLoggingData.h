//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGSearchLoggingData : NSObject
{
    NSArray *_resultList;
    NSArray *_resultIDList;
    NSArray *_resultTypeList;
    NSString *_rankToken;
    long long _followStatus;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;
@property(readonly, copy, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
@property(readonly, copy, nonatomic) NSArray *resultTypeList; // @synthesize resultTypeList=_resultTypeList;
@property(readonly, copy, nonatomic) NSArray *resultIDList; // @synthesize resultIDList=_resultIDList;
@property(readonly, copy, nonatomic) NSArray *resultList; // @synthesize resultList=_resultList;
- (id)initWithResultList:(id)arg1 rankToken:(id)arg2 followStatus:(long long)arg3;

@end


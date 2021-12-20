//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol IGFeedRequestConfig;

@interface IGMainFeedUpdateResult : NSObject
{
    _Bool _hasNewFeedItems;
    _Bool _containsOldFirstItemInTopItems;
    id <IGFeedRequestConfig> _requestConfig;
    NSDictionary *_response;
    NSArray *_unseenFeedItems;
    long long _updateCount;
    long long _insertCount;
    long long _deleteCount;
    long long _moveCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long moveCount; // @synthesize moveCount=_moveCount;
@property(nonatomic) long long deleteCount; // @synthesize deleteCount=_deleteCount;
@property(nonatomic) long long insertCount; // @synthesize insertCount=_insertCount;
@property(nonatomic) long long updateCount; // @synthesize updateCount=_updateCount;
@property(copy, nonatomic) NSArray *unseenFeedItems; // @synthesize unseenFeedItems=_unseenFeedItems;
@property(nonatomic) _Bool containsOldFirstItemInTopItems; // @synthesize containsOldFirstItemInTopItems=_containsOldFirstItemInTopItems;
@property(nonatomic) _Bool hasNewFeedItems; // @synthesize hasNewFeedItems=_hasNewFeedItems;
@property(copy, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(retain, nonatomic) id <IGFeedRequestConfig> requestConfig; // @synthesize requestConfig=_requestConfig;
- (id)analyticsExtras;
- (_Bool)isDisruptive;

@end

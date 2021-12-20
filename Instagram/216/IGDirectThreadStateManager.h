//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserDefaults;

@interface IGDirectThreadStateManager : NSObject
{
    IGUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (_Bool)remove:(id)arg1 fromStateListForThreadId:(id)arg2 key:(id)arg3;
- (_Bool)insert:(id)arg1 inStateListForThreadId:(id)arg2 key:(id)arg3;
- (id)getStateListsForKey:(id)arg1;
- (id)getStateListForThreadId:(id)arg1 key:(id)arg2;
- (void)clearStateListForThreadId:(id)arg1 key:(id)arg2;
- (_Bool)createStateListForThreadId:(id)arg1 key:(id)arg2;
- (_Bool)decrementStateCounterForThreadId:(id)arg1 key:(id)arg2;
- (_Bool)incrementStateCounterForThreadId:(id)arg1 key:(id)arg2;
- (id)getStateCounterForThreadId:(id)arg1 key:(id)arg2;
- (_Bool)createStateCounterForThreadId:(id)arg1 key:(id)arg2;
- (id)initWithUserDefaults:(id)arg1;

@end


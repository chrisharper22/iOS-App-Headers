//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBStash;

@interface IABPCMAdConversionsStorage : NSObject
{
    id <FBStash> _stash;
}

+ (id)defaultStorage;
- (void).cxx_destruct;
- (long long)numberOfStoredConversionsAndReturnError:(id *)arg1;
- (_Bool)deleteAllConversionsAndReturnError:(id *)arg1;
- (_Bool)deleteConversionForKey:(id)arg1 error:(id *)arg2;
- (id)fetchUnsyncedConversionsAndReturnError:(id *)arg1;
- (id)fetchConsumptionReadyConversionsAndReturnError:(id *)arg1;
- (id)fetchConversionForKey:(id)arg1 error:(id *)arg2;
- (_Bool)saveConversion:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)initWithStash:(id)arg1;

@end


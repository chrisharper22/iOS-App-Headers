//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol FBFamilySharedKeyValueDataStore <NSObject>
- (_Bool)synchronize;
- (_Bool)boolForKey:(NSString *)arg1;
- (void)setBool:(_Bool)arg1 forKey:(NSString *)arg2;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;
@end

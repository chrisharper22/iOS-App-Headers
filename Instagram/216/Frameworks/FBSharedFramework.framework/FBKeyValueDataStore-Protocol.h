//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol FBKeyValueDataStore <NSObject>
- (_Bool)synchronize;
- (void)setValuesForKeysWithDictionary:(NSDictionary *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (id)valueForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryRepresentation;
- (void)setDouble:(double)arg1 forKey:(NSString *)arg2;
- (double)doubleForKey:(NSString *)arg1;
- (void)setFloat:(float)arg1 forKey:(NSString *)arg2;
- (float)floatForKey:(NSString *)arg1;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2;
- (long long)integerForKey:(NSString *)arg1;
- (void)setBool:(_Bool)arg1 forKey:(NSString *)arg2;
- (_Bool)boolForKey:(NSString *)arg1;
- (NSData *)dataForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (NSArray *)arrayForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;
@end


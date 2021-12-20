//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSArray, NSData, NSString;

@protocol MOSDiskCaching <NSObject>
- (NSArray *)getAllKeys;
- (void)clear:(void (^)(NSError *))arg1;
- (void)deleteCachedDataForKey:(NSString *)arg1;
- (void)setImageData:(NSData *)arg1 forKey:(NSString *)arg2;
- (_Bool)containsImageDataForKey:(NSString *)arg1;
- (NSData *)imageDataForKey:(NSString *)arg1;
@end


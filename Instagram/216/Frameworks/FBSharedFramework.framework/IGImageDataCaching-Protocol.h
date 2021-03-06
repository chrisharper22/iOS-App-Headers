//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSData, NSString, NSURL;

@protocol IGImageDataCaching <NSObject>
- (void)updateAccessTimeForImageDataWithKey:(NSString *)arg1;
- (void)removeAllImageData;
- (_Bool)containsImageDataForKey:(NSString *)arg1;
- (NSData *)imageDataForKey:(NSString *)arg1;
- (void)setImageData:(NSData *)arg1 withURL:(NSURL *)arg2 forKey:(NSString *)arg3 forModule:(NSString *)arg4 forFetchType:(long long)arg5 forScans:(NSString *)arg6;
@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString;

@protocol IGMLDownloader
- (NSString *)modelPathForType:(NSString *)arg1;
- (void)fetchModels:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
@end


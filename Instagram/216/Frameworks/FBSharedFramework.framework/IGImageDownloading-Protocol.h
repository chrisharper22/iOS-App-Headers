//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/MOSImageDownloading-Protocol.h>
#import <FBSharedFramework/NSObject-Protocol.h>

@class NSURL;

@protocol IGImageDownloading <NSObject, MOSImageDownloading>
- (id)downloadImageWithURL:(NSURL *)arg1 downloadingOptions:(CDStruct_0cc8954d)arg2 mosaicCompletionBlock:(void (^)(MOSImageDownloaderResponse *))arg3;
- (id)downloadImageWithURL:(NSURL *)arg1 downloadingOptions:(CDStruct_0cc8954d)arg2 completionBlock:(void (^)(id <MOSImageRequestInterfacing>, UIImage *, unsigned long long, NSError *, IGImageRequestSummary *))arg3;
@end


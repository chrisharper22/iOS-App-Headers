//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGARDownloadServiceCompletedDownload-Protocol.h>

@class NSString, NSURL;

@interface IGARDownloadServiceCompletedDownloadImpl : NSObject <IGARDownloadServiceCompletedDownload>
{
    NSURL *_remoteURL;
    NSURL *_fileURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


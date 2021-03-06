//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBWatchdogStallFileContents, MMapFileWatchdogTimerLogger, NSString;

@interface IGFBWatchdogTimerLogger : NSObject
{
    FBWatchdogStallFileContents *_fbPreviousSessionStalledFileContents;
    NSString *_legacyPreviousSessionStalledBreakpadConfigFile;
    _Bool _legacyStalledInPreviousSession;
    MMapFileWatchdogTimerLogger *_mmapedFileLogger;
}

- (void).cxx_destruct;
- (void)_readLegacyStallIfNeededAndResetForIGDiskInfra;
- (void)_readLegacyStallIfNeededAndResetForFBDiskInfra;
- (void)resetLastStalledStateIfNeeded;
- (void)logStallForIGWatchdogTimer:(id)arg1;
- (id)previousSessionStallBreakpadConfigFile;
- (_Bool)stalledInPreviousSession;
- (id)init;

@end


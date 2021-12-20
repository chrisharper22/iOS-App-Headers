//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSHTTPURLResponse, NSMutableDictionary, NSString, NSURL;

@interface FBBreakpadCrashReport : NSObject
{
    NSMutableDictionary *_parameters;
    NSMutableDictionary *_headers;
    NSMutableDictionary *_fileAttachmentData;
    unsigned long long _minidumpSize;
    NSURL *_exceptionURL;
    NSString *_minidumpPath;
    NSString *_configPath;
    NSString *_extraPath;
    NSDate *_crashTime;
    NSHTTPURLResponse *_crashResponse;
}

+ (void)cleanupCorruptedCrashReportWithConfigPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSHTTPURLResponse *crashResponse; // @synthesize crashResponse=_crashResponse;
@property(readonly, nonatomic) NSDate *crashTime; // @synthesize crashTime=_crashTime;
@property(readonly, copy, nonatomic) NSString *extraPath; // @synthesize extraPath=_extraPath;
@property(readonly, copy, nonatomic) NSString *configPath; // @synthesize configPath=_configPath;
@property(readonly, copy, nonatomic) NSString *minidumpPath; // @synthesize minidumpPath=_minidumpPath;
@property(readonly, nonatomic) NSURL *exceptionURL; // @synthesize exceptionURL=_exceptionURL;
- (_Bool)loadConfigFile:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (_Bool)isFatalReport;
- (void)cleanupFiles;
- (id)sendCrashReport:(id *)arg1;
- (id)fileUploadAttachments;
- (void)removeFileUploadAttachment:(id)arg1;
- (void)addFileUploadAttachment:(id)arg1;
- (void)removeHeaderForKey:(id)arg1;
- (void)addHeader:(id)arg1 forKey:(id)arg2;
- (void)removeParameterForKey:(id)arg1;
- (id)parameterForKey:(id)arg1;
- (void)addParameter:(id)arg1 forKey:(id)arg2;
- (id)fileAttachmentData;
- (id)parameters;
- (id)minidumpData;
- (id)initWithConfigPath:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;

@end

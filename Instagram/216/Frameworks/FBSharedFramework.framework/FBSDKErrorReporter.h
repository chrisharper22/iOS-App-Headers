//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKErrorReporting-Protocol.h>

@class NSString;
@protocol FBSDKFileManaging, FBSDKGraphRequestFactory, FBSDKSettings;

@interface FBSDKErrorReporter : NSObject <FBSDKErrorReporting>
{
    _Bool _isEnabled;
    id <FBSDKGraphRequestFactory> _graphRequestFactory;
    id <FBSDKFileManaging> _fileManager;
    id <FBSDKSettings> _settings;
    Class _dataExtractor;
    NSString *_directoryPath;
}

+ (void)saveError:(long long)arg1 errorDomain:(id)arg2 message:(id)arg3;
+ (id)shared;
- (void).cxx_destruct;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(readonly, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(retain, nonatomic) Class dataExtractor; // @synthesize dataExtractor=_dataExtractor;
@property(retain, nonatomic) id <FBSDKSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <FBSDKFileManaging> fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) id <FBSDKGraphRequestFactory> graphRequestFactory; // @synthesize graphRequestFactory=_graphRequestFactory;
- (id)_pathToErrorInfoFile;
- (void)_saveErrorInfoToDisk:(id)arg1;
- (void)_clearErrorInfo;
- (id)loadErrorReports;
- (void)uploadErrors;
- (void)createErrorDirectoryIfNeeded;
- (void)saveError:(long long)arg1 errorDomain:(id)arg2 message:(id)arg3;
- (void)enable;
- (id)initWithGraphRequestFactory:(id)arg1 fileManager:(id)arg2 settings:(id)arg3 fileDataExtractor:(Class)arg4;
- (id)init;

@end


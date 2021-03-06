//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface MOSProgressiveJPEGUpdateResult : NSObject
{
    NSError *_error;
    unsigned long long _scanNumber;
    unsigned long long _fileSize;
}

+ (id)newWithScanNumber:(unsigned long long)arg1 fileSize:(unsigned long long)arg2 error:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) unsigned long long scanNumber; // @synthesize scanNumber=_scanNumber;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;

@end


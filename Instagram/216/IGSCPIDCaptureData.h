//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGSCPIDCaptureData : NSObject
{
    unsigned long long _documentType;
    NSArray *_documentData;
    NSString *_uploadMedium;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *uploadMedium; // @synthesize uploadMedium=_uploadMedium;
@property(copy, nonatomic) NSArray *documentData; // @synthesize documentData=_documentData;
@property(nonatomic) unsigned long long documentType; // @synthesize documentType=_documentType;

@end


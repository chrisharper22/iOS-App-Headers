//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDataUpload, NSMutableArray, NSString;

@interface IGMultipartRequestBody : NSObject
{
    IGDataUpload *_boundaryUpload;
    IGDataUpload *_terminalUpload;
    NSMutableArray *_uploads;
    NSString *_contentType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (id)inputStream;
@property(readonly, nonatomic) unsigned long long contentLength;
- (id)initWithRequestParameters:(id)arg1 uploads:(id)arg2 boundary:(id)arg3;
- (id)initWithRequestParameters:(id)arg1 uploads:(id)arg2;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSMutableURLRequest.h>

@class NSArray;

@interface NSMutableURLRequest (OAParameterAdditions)
- (void)attachFileWithName:(id)arg1 filename:(id)arg2 contentType:(id)arg3 data:(id)arg4;
- (void)setHTTPBodyWithString:(id)arg1;
@property(retain, nonatomic) NSArray *parameters;
- (_Bool)isMultipart;
@end


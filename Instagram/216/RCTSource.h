//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface RCTSource : NSObject
{
    NSURL *_url;
    NSData *_data;
    unsigned long long _length;
    long long _filesChangedCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long filesChangedCount; // @synthesize filesChangedCount=_filesChangedCount;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface FBManagedFileURL : NSObject
{
    NSURL *_fileURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1;

@end

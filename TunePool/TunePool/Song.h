//
//  Song.h
//  TunePool
//
//  Created by Evan Shenkman on 1/31/16.
//  Copyright © 2016 Roshan Krishnan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Song : NSObject

+ (Song*)createSongWithResponse:(NSDictionary *)res;

@end
